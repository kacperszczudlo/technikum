using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using WebApplication_Wakacje.Models;

namespace WebApplication_Wakacje.Data
{
    public class WebApplication_WakacjeContext : DbContext
    {
        public WebApplication_WakacjeContext (DbContextOptions<WebApplication_WakacjeContext> options)
            : base(options)
        {
        }

        public DbSet<WebApplication_Wakacje.Models.Vacation> Vacation { get; set; }
    }
}
