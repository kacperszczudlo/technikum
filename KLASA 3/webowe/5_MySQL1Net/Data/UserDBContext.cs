using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using _3tig_MySQL1Net;
using _3tig_MySQL1Net.Models;

namespace _3tig_MySQL1Net.Data
{
    public class UserDBContext : DbContext
    {
        public UserDBContext(DbContextOptions<UserDBContext> options)
            : base(options)
        {

        }
        public DbSet<Users> Users { get; set; }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            base.OnModelCreating(modelBuilder);
            modelBuilder.Entity<Users>().ToTable("UsersTable");

            modelBuilder.Entity<Users>().HasData(
                new Users { Id = 1, Firstname = "Antoni", Lastname = "Małecki", DateOf = new DateTime(2012, 12, 12) },
                new Users { Id = 2, Firstname = "Monika", Lastname = "Dworek", DateOf = new DateTime(2012, 9, 11) },
                new Users { Id = 3, Firstname = "Tomasz", Lastname = "Bomasz", DateOf = new DateTime(2009, 3, 22) }
                );
        }
    }
}
