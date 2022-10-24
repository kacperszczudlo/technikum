using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using WebApplication_School.Models;

namespace WebApplication_School.Data
{
    public class WebApplication_SchoolContext : DbContext
    {
        public WebApplication_SchoolContext (DbContextOptions<WebApplication_SchoolContext> options)
            : base(options)
        {
        }

        public DbSet<WebApplication_School.Models.Course> Course { get; set; }

        public DbSet<WebApplication_School.Models.Student> Student { get; set; }
    }
}
