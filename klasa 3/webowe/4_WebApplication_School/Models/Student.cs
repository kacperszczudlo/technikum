using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebApplication_School.Models
{
    public class Student
    {
        [Key]
        public int StudentId { get; set; }
        [Display(Name = "Imię ucznia")]
        [Required(ErrorMessage = "Podaj imię")]
        public string FirstName { get; set; }
        [Display(Name = "Nazwisko ucznia")]
        [Required(ErrorMessage = "Podaj nazwisko")]
        public string LastName { get; set; }
        public int CourseId { get; set; }

    }
}
