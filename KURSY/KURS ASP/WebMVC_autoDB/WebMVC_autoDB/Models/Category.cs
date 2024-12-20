﻿using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;

namespace WebMVC_autoDB.Models
{
    public class Category
    {
        [Key]
        public int Id { get; set; }
        [Display(Name = "Kategoria")]
        [Required(ErrorMessage = "Podaj kategorię")]
        public string Name { get; set; }
        [Display(Name = "Opis")]
        [DataType(DataType.MultilineText)]
        public string Description { get; set; }
        public Category MyCategory { get; set; }
        [Display(Name = "Filmy")]
        public virtual List<Film> Films { get; set; }
    }
}
