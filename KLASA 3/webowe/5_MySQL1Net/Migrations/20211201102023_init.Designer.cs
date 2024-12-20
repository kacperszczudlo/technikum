﻿// <auto-generated />
using System;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Infrastructure;
using Microsoft.EntityFrameworkCore.Migrations;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion;
using _3tig_MySQL1Net.Data;

namespace _3tig_MySQL1Net.Migrations
{
    [DbContext(typeof(UserDBContext))]
    [Migration("20211201102023_init")]
    partial class init
    {
        protected override void BuildTargetModel(ModelBuilder modelBuilder)
        {
#pragma warning disable 612, 618
            modelBuilder
                .HasAnnotation("Relational:MaxIdentifierLength", 64)
                .HasAnnotation("ProductVersion", "5.0.10");

            modelBuilder.Entity("_3tig_MySQL1Net.Models.Users", b =>
                {
                    b.Property<int>("Id")
                        .ValueGeneratedOnAdd()
                        .HasColumnType("int");

                    b.Property<DateTime>("DateOf")
                        .HasColumnType("datetime(6)");

                    b.Property<string>("Firstname")
                        .HasColumnType("longtext");

                    b.Property<string>("Lastname")
                        .HasColumnType("longtext");

                    b.HasKey("Id");

                    b.ToTable("UsersTable");

                    b.HasData(
                        new
                        {
                            Id = 1,
                            DateOf = new DateTime(2012, 12, 12, 0, 0, 0, 0, DateTimeKind.Unspecified),
                            Firstname = "Antoni",
                            Lastname = "Małecki"
                        },
                        new
                        {
                            Id = 2,
                            DateOf = new DateTime(2012, 9, 11, 0, 0, 0, 0, DateTimeKind.Unspecified),
                            Firstname = "Monika",
                            Lastname = "Dworek"
                        },
                        new
                        {
                            Id = 3,
                            DateOf = new DateTime(2009, 3, 22, 0, 0, 0, 0, DateTimeKind.Unspecified),
                            Firstname = "Tomasz",
                            Lastname = "Bomasz"
                        });
                });
#pragma warning restore 612, 618
        }
    }
}
