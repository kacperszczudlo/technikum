using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using cw1efall.Models;

namespace cw1efall.Data
{
    public class cw1efallContext : DbContext
    {
        public cw1efallContext (DbContextOptions<cw1efallContext> options)
            : base(options)
        {
        }

        public DbSet<cw1efall.Models.Animal> Animal { get; set; }
    }
}
