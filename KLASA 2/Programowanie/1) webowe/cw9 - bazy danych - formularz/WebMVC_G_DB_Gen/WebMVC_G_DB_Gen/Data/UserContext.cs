using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using WebMVC_G_DB_Gen.Models;

namespace WebMVC_G_DB_Gen.Data
{
    public class UserContext : DbContext
    {
        public UserContext (DbContextOptions<UserContext> options)
            : base(options)
        {
        }

        public DbSet<WebMVC_G_DB_Gen.Models.User> User { get; set; }
    }
}
