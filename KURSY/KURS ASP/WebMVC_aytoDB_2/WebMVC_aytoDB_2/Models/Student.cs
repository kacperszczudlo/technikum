using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebMVC_aytoDB_2.Models
{
    public class Student
    {
        
        
            [Key]
            public int Id { get; set; }

            [Display(Name = "Imie")]
            public string FirstName { get; set; }

            [Display(Name = "Nazwisko")]
            public string LastName { get; set; }
            [Display(Name = "Kurs")]
            public Kurs MyCourse { get; set; }
            [Display(Name = "Kurs")]
            public int MyCourseId { get; set; }
        }
       
}

