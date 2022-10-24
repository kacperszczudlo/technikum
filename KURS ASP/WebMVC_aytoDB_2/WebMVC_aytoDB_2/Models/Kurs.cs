using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebMVC_aytoDB_2.Models
{
    public class Kurs
    {
       
            [Key]
            public int Id { get; set; }
            [Display(Name = "Nazwa")]
            public string Name { get; set; }
            [Display(Name = "Autor")]
            public string Author { get; set; }
            [Display(Name = "Students")]
            public virtual List<Student> Students { get; set; }
        }
    }

