using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using WebMVC_autoDB.Models;

namespace WebMVC_autoDB.Data
{
    public class WebMVC_autoDBContext : DbContext
    {
        public WebMVC_autoDBContext (DbContextOptions<WebMVC_autoDBContext> options)
            : base(options)
        {
        }

        public DbSet<WebMVC_autoDB.Models.Film> Film { get; set; }

        public DbSet<WebMVC_autoDB.Models.Category> Category { get; set; }
        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            base.OnModelCreating(modelBuilder);
            modelBuilder.Entity<Category>().HasData(
                new Category
                {
                    Id = 1,
                    Name = "Wojenny",
                    Description = "Ciekawe filmy po wojnie"
                },
                new Category
                {
                    Id = 2,
                    Name = "Scince fiction",
                    Description = "Tej ale miecz świetlny"
                },
                new Category
                {
                    Id = 3,
                    Name = "Przygodowy",
                    Description = "Rozgrzana rura"
                },
                new Category
                {
                    Id = 4,
                    Name = "Romantyczny",
                    Description = "Misja ślimak"
                }
                );
            modelBuilder.Entity<Film>().HasData(
                 new Film
                 {
                     Id = 1,
                     Title = "O jeden warkocz za dużo",
                     Duration = 120,
                     CategoryId = 4
                 },
                 new Film
                 {
                     Id = 2,
                     Title = "Big Papa",
                     Duration = 130,
                     CategoryId = 2
                 },
                 new Film
                 {
                     Id = 3,
                     Title = "Emeritos Banditos",
                     Duration = 180,
                     CategoryId = 1
                 },
                 new Film
                 {
                     Id = 4,
                     Title = "Musze bo sie udusze",
                     Duration = 140,
                     CategoryId = 3
                 }
                );

        }
    }
}
