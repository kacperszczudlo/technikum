using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebApplication_Wakacje.Models
{
    public class Vacation
    {
        [Key]  
        public int ID { get; set; }
        [Display(Name = "Miejsce")]
        [Required(ErrorMessage = "Podaj miejsce")]
        public string Place { get; set; }
        [Display(Name = "Cena")]
        [Required(ErrorMessage = "Podaj cene")]
        public double Price { get; set; }


    }
}
