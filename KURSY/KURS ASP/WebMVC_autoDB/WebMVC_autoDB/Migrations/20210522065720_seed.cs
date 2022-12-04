using Microsoft.EntityFrameworkCore.Migrations;

namespace WebMVC_autoDB.Migrations
{
    public partial class seed : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.InsertData(
                table: "Category",
                columns: new[] { "Id", "Description", "MyCategoryId", "Name" },
                values: new object[,]
                {
                    { 1, "Ciekawe filmy po wojnie", null, "Wojenny" },
                    { 2, "Tej ale miecz świetlny", null, "Scince fiction" },
                    { 3, "Rozgrzana rura", null, "Przygodowy" },
                    { 4, "Misja ślimak", null, "Romantyczny" }
                });

            migrationBuilder.InsertData(
                table: "Film",
                columns: new[] { "Id", "CategoryId", "Duration", "Title" },
                values: new object[,]
                {
                    { 3, 1, 180, "Emeritos Banditos" },
                    { 2, 2, 130, "Big Papa" },
                    { 4, 3, 140, "Musze bo sie udusze" },
                    { 1, 4, 120, "O jeden warkocz za dużo" }
                });
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DeleteData(
                table: "Film",
                keyColumn: "Id",
                keyValue: 1);

            migrationBuilder.DeleteData(
                table: "Film",
                keyColumn: "Id",
                keyValue: 2);

            migrationBuilder.DeleteData(
                table: "Film",
                keyColumn: "Id",
                keyValue: 3);

            migrationBuilder.DeleteData(
                table: "Film",
                keyColumn: "Id",
                keyValue: 4);

            migrationBuilder.DeleteData(
                table: "Category",
                keyColumn: "Id",
                keyValue: 1);

            migrationBuilder.DeleteData(
                table: "Category",
                keyColumn: "Id",
                keyValue: 2);

            migrationBuilder.DeleteData(
                table: "Category",
                keyColumn: "Id",
                keyValue: 3);

            migrationBuilder.DeleteData(
                table: "Category",
                keyColumn: "Id",
                keyValue: 4);
        }
    }
}
