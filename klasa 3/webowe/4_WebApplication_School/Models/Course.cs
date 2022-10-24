using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebApplication_School.Models
{
    public class Course
    {
        [Key]
        public int CourseId { get; set; }
        [Display(Name = "Nazwa")]
        [Required(ErrorMessage = "Podaj nazwę")]
        public string Name { get; set; }
        [Display(Name = "Prowadzący")]
        [Required(ErrorMessage = "Podaj prowadzącego")]
        public string Leader { get; set; }
        [Display(Name = "Miejsce")]
        [Required(ErrorMessage = "Podaj miejsce")]
        public string Place { get; set; }
        public int StudentId { get; set; }
        
    }
}
