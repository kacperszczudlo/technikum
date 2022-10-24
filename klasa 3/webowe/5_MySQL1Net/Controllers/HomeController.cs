using _3tig_MySQL1Net.Data;
using _3tig_MySQL1Net.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Logging;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;

namespace _3tig_MySQL1Net.Controllers
{
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;
        private UserDBContext _db;

        public HomeController(ILogger<HomeController> logger, UserDBContext context)
        {
            _logger = logger;
            _db = context;
        }

        public IActionResult Index()
        {
            List<Users> users = _db.Users.ToList();
            return View(users);
        }

        public IActionResult Privacy()
        {
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}
