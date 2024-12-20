﻿using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebMVC_autoDB.Models
{
    public class Film
    {
        [Key]
        public int Id { get; set; }
        [Display(Name = "Tytuł")]
        [Required(ErrorMessage = "Podaj Tytuł")]
        public string Title { get; set; }
        [Display(Name = "Czas trwania (min)")]
        public int Duration { get; set; }
        [Display(Name = "Kategoria")]
        public Category MyCategory { get; set; }
        [Display(Name = "Kategoria")]
        public int CategoryId { get; set; }

    }
}
