using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using WebMVC_aytoDB_2.Models;

namespace WebMVC_aytoDB_2.Data
{
    public class WebMVC_aytoDB_2Context : DbContext
    {
        public WebMVC_aytoDB_2Context (DbContextOptions<WebMVC_aytoDB_2Context> options)
            : base(options)
        {
        }

        public DbSet<WebMVC_aytoDB_2.Models.Kurs> Kurs { get; set; }

        public DbSet<WebMVC_aytoDB_2.Models.Student> Student { get; set; }
    }
}
