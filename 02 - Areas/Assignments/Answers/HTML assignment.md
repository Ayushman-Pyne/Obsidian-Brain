---
Date: 2024-10-20 19:16
tags: 
cssclasses:
  - center-titles
---
# HTML assignment

### Home page
- ![[Pasted image 20241020192459.png]]
``` HTML
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Swami Vivekananda University | Home</title>
    <link rel="stylesheet" href="style.css" />
  </head>
  <body>
    <header>
      <span class="logo"
        ><img src="resources/logo.png" alt="college logo"
      /></span>
      <h1>Swami Vivekananda University</h1>
      <nav>
        <ul>
          <li><a href="home.html" class="active">Home</a></li>
          <li><a href="academics.html">Academics</a></li>
          <li><a href="admission.html">Admission</a></li>
          <li><a href="gallery.html">Gallery</a></li>
          <li><a href="contact.html">Contact Us</a></li>
        </ul>
      </nav>
    </header>
    <section class="home">
      <img src="resources/front view.jpg" alt="" />
      <h2>Empowering Minds, Shaping Future</h2>
      <p>
        Welcome to Swami Vivekananda University. We are an institution in West
        Bengal dedicated to the pursuit of knowledge and excellence and
        providing quality education to our students. Since our inception, we
        have been striving to provide our students with an exceptional learning
        experience. Our aim is to facilitate and nurture the growth and
        development of our students and to ensure that they reach their full
        potential.
      </p>
      <p>
        We offer a range of undergraduate, postgraduate and diploma courses in a
        variety of subjects. These courses range from engineering and management
        to humanities.
      </p>
      <p>
        Our courses are designed to provide students with the skills and
        expertise required to excel in their chosen fields. Our faculty members
        are highly experienced and qualified professionals who are committed to
        providing our students with the best possible education.
      </p>
      <p>
        Our faculty members are experts in their respective fields and are
        passionate about helping our students develop the knowledge and skills
        they need to succeed. We strive to create a learning environment where
        our students can grow and develop in a safe and supportive environment.
      </p>
    </section>
    <footer>
      <center>All rights reserved to Arceus&copy; 2024</center>
    </footer>
  </body>
</html>
```
### Academics Page
- ![[Pasted image 20241020192933.png]]

``` HTML
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Swami Vivekananda University | Academics</title>
    <link rel="stylesheet" href="style.css" />
  </head>
  <body>
    <header>
      <span class="logo"
        ><img src="resources/logo.png" alt="college logo"
      /></span>
      <h1>Swami Vivekananda University</h1>
      <nav>
        <ul>
          <li><a href="home.html">Home</a></li>
          <li><a href="academics.html" class="active">Academics</a></li>
          <li><a href="admission.html">Admission</a></li>
          <li><a href="gallery.html">Gallery</a></li>
          <li><a href="contact.html">Contact Us</a></li>
        </ul>
      </nav>
    </header>
    <section class="academics-content">
      <ol>
        <li>
          College Of Engineering
          <ul>
            <li>Department Of Computer Science & Engineering</li>
            <li>Department Of Civil Engineering</li>
            <li>Department Of Electrical Enginnering</li>
            <li>Department Of Electronics & Communication</li>
            <li>Department Of Mechanical Engineering</li>
          </ul>
        </li>
        <li>
          College Of Humanity & Social Science
          <ul>
            <li>Department Of English</li>
            <li>Department Of Journalism & Mass Communication</li>
            <li>Department Of Education</li>
          </ul>
        </li>
        <li>
          College Of Agriculture
          <ul>
            <li>Department Of Agriculture</li>
          </ul>
        </li>
        <li>
          College Of Management
          <ul>
            <li>Department Of Management Studies</li>
          </ul>
        </li>
        <li>
          College Of Allied Health Services
          <ul>
            <li>Department Of Physiotherapy</li>
            <li>Department Of Optometry</li>
            <li>Department Of Food & Nutrition</li>
            <li>Department Of Psychology</li>
            <li>Department Of Medical Laboratory Technology</li>
            <li>Department Of Medical Radiology & Imaging Technology</li>
          </ul>
        </li>
        <li>
          College Of Computer Science
          <ul>
            <li>Department Of Computer Application</li>
            <li>Department Of Data Science</li>
            <li>Department Of Advanced Networking & Cyber Security</li>
            <li>Department Of Multimedia & Animation</li>
          </ul>
        </li>
        <li>
          College Of Life Science
          <ul>
            <li>Department Of Biotechnology</li>
            <li>Department Of Microbiology</li>
          </ul>
        </li>
      </ol>
    </section>
    <footer>
      <center>All rights reserved to Arceus&copy; 2024</center>
    </footer>
  </body>
</html>
```
### Admission Page
- ![[Pasted image 20241020192951.png]]
```HTML
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Swami Vivekananda University | Admission</title>
    <link rel="stylesheet" href="style.css" />
  </head>
  <body>
    <header>
      <span class="logo"
        ><img src="resources/logo.png" alt="college logo"
      /></span>
      <h1>Swami Vivekananda University</h1>
      <nav>
        <ul>
          <li><a href="home.html">Home</a></li>
          <li><a href="academics.html">Academics</a></li>
          <li><a href="admission.html" class="active">Admission</a></li>
          <li><a href="gallery.html">Gallery</a></li>
          <li><a href="contact.html">Contact Us</a></li>
        </ul>
      </nav>
    </header>
    <section class="admission">
      <form>
        <h2>Online Admission Form</h2>
        <!-- name -->
        <div>
          <label>Name</label> <br />
          <input type="text" name="name" required /> <br />
        </div>
        <!-- email -->
        <div>
          <label>Email</label> <br />
          <input type="email" name="email" required /> <br />
        </div>
        <!-- whatsapp number -->
        <div>
          <label>WhatsApp Number</label> <br />
          <input type="number" name="wnum" required /> <br />
        </div>
        <!-- course -->
        <div>
          <label>Course Name</label> <br />
          <input type="text" name="cname" required /> <br />
        </div>
        <!-- address -->
        <div>
          <label>Address</label> <br />
          <input type="text" name="address" /> <br />
        </div>
        <!-- pincode -->
        <div>
          <label>Pincode</label> <br />
          <input type="number" name="pincode" />
          <br />
        </div>
        <!-- DOB -->
        <div>
          <label>Date of Birth</label> <br />
          <input type="date" name="dob" /> <br />
        </div>
        <!-- nationality -->
        <div>
          <label>Nationality</label> <br />
          <input type="text" name="nationality" /> <br />
        </div>
        <!-- father's name -->
        <div>
          <label>Father's Name</label> <br />
          <input type="text" name="fathername" /> <br />
        </div>
        <!-- father's mobile number -->
        <div>
          <label>Father's Mobile Number</label> <br />
          <input type="number" name="fathernumber" /> <br />
        </div>
        <!-- father's occupation -->
        <div>
          <label>Father's Occupation</label> <br />
          <input type="number" name="fatheroccupation" /> <br />
        </div>
        <!-- mother's name -->
        <div>
          <label>Mother's Name</label> <br />
          <input type="number" name="mothername" /> <br />
        </div>
        <!-- mother's number -->
        <div>
          <label>Mother's Mobile Number</label> <br />
          <input type="number" name="mothername" /> <br />
        </div>
        <!-- mother's occupation -->
        <div>
          <label>Mother's Occupation</label> <br />
          <input type="number" name="motheroccupation" /> <br />
        </div>
        <!-- village/ city name -->
        <div>
          <label>Village/City Name</label> <br />
          <input type="number" name="vilcitname" /> <br />
        </div>
        <!-- district name -->
        <div>
          <label>District Name</label> <br />
          <input type="number" name="dist" /> <br />
        </div>
        <!-- guardian name -->
        <div>
          <label>Guardian's Name</label> <br />
          <input type="number" name="guardianname" required /> <br />
        </div>
        <!-- guardian number -->
        <div>
          <label>Guardian Number</label> <br />
          <input type="number" name="guardiannumber" required /> <br />
        </div>
        <!-- guardian occupation -->
        <div>
          <label>Guardian's Occupation</label> <br />
          <input type="number" name="guardianoccupation" required /> <br />
        </div>
        <!-- annual income -->
        <div>
          <label>Annual Income</label> <br />
          <input type="number" name="annualincome" /> <br />
        </div>
        <!-- academic credentials -->
        <div>
          <label>Academic Credentials</label> <br />
          <input type="number" name="academiccreds" required /> <br />
        </div>
        <button>Submit</button>
      </form>
    </section>
    <footer>
      <center>All rights reserved to Arceus&copy; 2024</center>
    </footer>
  </body>
</html>
```
### Gallery Page
- ![[Pasted image 20241020193043.png]]
```HTML
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Swami Vivekananda University | Home</title>
    <link rel="stylesheet" href="style.css" />
  </head>
  <body>
    <header>
      <span class="logo"
        ><img src="resources/logo.png" alt="college logo"
      /></span>
      <h1>Swami Vivekananda University</h1>
      <nav>
        <ul>
          <li><a href="home.html">Home</a></li>
          <li><a href="academics.html">Academics</a></li>
          <li><a href="admission.html">Admission</a></li>
          <li><a href="gallery.html" class="active">Gallery</a></li>
          <li><a href="contact.html">Contact Us</a></li>
        </ul>
      </nav>
    </header>
    <section class="gallery">
      <img src="resources/front view.jpg" />
      <img src="resources/ele lab.jpg" />
      <img src="resources/comp lab.jpg" />
      <img src="resources/swach bharat.jpg" />
      <img src="resources/class.jpg" />
      <img src="resources/diwali.jpg" />
    </section>
    <footer>
      <center>All rights reserved to Arceus&copy; 2024</center>
    </footer>
  </body>
</html>
```
### Contact Us Page
- ![[Pasted image 20241020193115.png]]
```HTML
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>Swami Vivekananda University | Home</title>
    <link rel="stylesheet" href="style.css" />
  </head>
  <body>
    <header>
      <span class="logo"
        ><img src="resources/logo.png" alt="college logo"
      /></span>
      <h1>Swami Vivekananda University</h1>
      <nav>
        <ul>
          <li><a href="home.html">Home</a></li>
          <li><a href="academics.html">Academics</a></li>
          <li><a href="admission.html">Admission</a></li>
          <li><a href="gallery.html">Gallery</a></li>
          <li><a href="contact.html" class="active">Contact Us</a></li>
        </ul>
      </nav>
    </header>
    <section class="contact">
      <div>
        <svg viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg">
          <path
            d="M12 21C15.5 17.4 19 14.1764 19 10.2C19 6.22355 15.866 3 12 3C8.13401 3 5 6.22355 5 10.2C5 14.1764 8.5 17.4 12 21Z"
            stroke="#000000"
            stroke-width="2"
            stroke-linecap="round"
            stroke-linejoin="round"
          />
          <path
            d="M12 12C13.1046 12 14 11.1046 14 10C14 8.89543 13.1046 8 12 8C10.8954 8 10 8.89543 10 10C10 11.1046 10.8954 12 12 12Z"
            stroke="#000000"
            stroke-width="2"
            stroke-linecap="round"
            stroke-linejoin="round"
          />
        </svg>
        <h2>Address</h2>
        <p>
          Telinipara, Barasat - Barrackpore Rd Bara Kanthalia, West Bengal -
          700121.
        </p>
      </div>
      <div>
        <svg viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg">
          <path
            d="M4 9.00005L10.2 13.65C11.2667 14.45 12.7333 14.45 13.8 13.65L20 9"
            stroke="#000000"
            stroke-width="2"
            stroke-linecap="round"
            stroke-linejoin="round"
          />
          <path
            d="M3 9.17681C3 8.45047 3.39378 7.78123 4.02871 7.42849L11.0287 3.5396C11.6328 3.20402 12.3672 3.20402 12.9713 3.5396L19.9713 7.42849C20.6062 7.78123 21 8.45047 21 9.17681V17C21 18.1046 20.1046 19 19 19H5C3.89543 19 3 18.1046 3 17V9.17681Z"
            stroke="#000000"
            stroke-width="2"
            stroke-linecap="round"
          />
        </svg>
        <h2>Email Us</h2>
        <p>
          <a href="mailto:info@swamivivekanandauniversity.ac.in"
            >info@swamivivekanandauniversity.ac.in
          </a>
        </p>
      </div>
      <div>
        <svg viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg">
          <path
            d="M3 5.5C3 14.0604 9.93959 21 18.5 21C18.8862 21 19.2691 20.9859 19.6483 20.9581C20.0834 20.9262 20.3009 20.9103 20.499 20.7963C20.663 20.7019 20.8185 20.5345 20.9007 20.364C21 20.1582 21 19.9181 21 19.438V16.6207C21 16.2169 21 16.015 20.9335 15.842C20.8749 15.6891 20.7795 15.553 20.6559 15.4456C20.516 15.324 20.3262 15.255 19.9468 15.117L16.74 13.9509C16.2985 13.7904 16.0777 13.7101 15.8683 13.7237C15.6836 13.7357 15.5059 13.7988 15.3549 13.9058C15.1837 14.0271 15.0629 14.2285 14.8212 14.6314L14 16C11.3501 14.7999 9.2019 12.6489 8 10L9.36863 9.17882C9.77145 8.93713 9.97286 8.81628 10.0942 8.64506C10.2012 8.49408 10.2643 8.31637 10.2763 8.1317C10.2899 7.92227 10.2096 7.70153 10.0491 7.26005L8.88299 4.05321C8.745 3.67376 8.67601 3.48403 8.55442 3.3441C8.44701 3.22049 8.31089 3.12515 8.15802 3.06645C7.98496 3 7.78308 3 7.37932 3H4.56201C4.08188 3 3.84181 3 3.63598 3.09925C3.4655 3.18146 3.29814 3.33701 3.2037 3.50103C3.08968 3.69907 3.07375 3.91662 3.04189 4.35173C3.01413 4.73086 3 5.11378 3 5.5Z"
            stroke="#000000"
            stroke-width="2"
            stroke-linecap="round"
            stroke-linejoin="round"
          />
        </svg>
        <h2>Phone</h2>
        <p>
          <a href="tel: +91 7044086270"> +91 7044086270 </a>
        </p>
      </div>
    </section>
    <footer>
      <center>All rights reserved to Arceus&copy; 2024</center>
    </footer>
  </body>
</html>
```
#### CSS
``` CSS
:root {
  --uranian-blue: #c6ddf5;
  --uranian-blue-light: #ddebf9;
  --uranian-blue-font: #f4f8fd;
  --outer-space: #36494eff;
  --black: #000000;
  --paynes-gray: #597081ff;
  --orange: #ffa500;
  --orange-red: #ff4500;
}

body {
  margin: 0px;
  background-color: var(--uranian-blue-light);
}

/* Link styles */

a {
  text-decoration: none;
}

a:hover {
  color: var(--orange);
}

/* Class Styles */

.active {
  color: var(--orange-red);
}

.block {
  height: 600px;
}

/* Header and Footer */

header {
  background-color: var(--outer-space);
  color: var(--uranian-blue-font);
  padding: 20px;
}

header {
  text-align: center;
  font-size: 1.25rem;
}

header nav ul li {
  list-style-type: none;
  display: inline;
  text-align: center;
  margin-right: 20px;
}

header .logo img {
  height: auto;
  width: 100%;
  max-width: 100px;
}

header a {
  color: var(--uranian-blue-font);
}

footer {
  font-size: 1.2rem;
  padding: 20px;
  background-color: var(--paynes-gray);
  color: var(--uranian-blue-font);
}

/* Home Page Styles */

.home {
  color: var(--black);
  font-size: 1.25rem;
}

.home h2 {
  color: var(--orange-red);
}

.home img {
  width: 100%;
  height: auto;
}

/* Academics Styles */

.academics-content {
  padding-top: 3rem;
  padding-left: 2rem;
  font-size: 1.2rem;
}

.academics-content ol li {
  font-weight: bold;
  margin-bottom: 20px;
}

.academics-content ol li ul li {
  font-weight: normal;
  margin-bottom: 0;
}

/* Admission Form Styles */

.admission {
  background-color: var(--uranian-blue);
  margin: 40px 20%;
  display: grid;
  align-items: center;
  border-radius: 15px;
}

.admission form {
  border: var(--outer-space) 2px solid;
  border-bottom: var(--outer-space) 4px solid;
  border-right: var(--outer-space) 4px solid;
  border-radius: 15px;
  padding: 20px;
}

.admission h2 {
  font-size: 2rem;
  text-align: center;
}

.admission form div {
  margin-bottom: 15px;
}

.admission form div label {
  font-size: 1.25rem;
  font-weight: bold;
}

.admission form div input {
  width: 100%;
  font-size: 1.25rem;
  border: 0;
  border-bottom: var(--black) 1px solid;
  background-color: transparent;
}

.admission form input:focus,
.admission form input:focus-visible {
  outline: none;
  border: var(--black) 1px solid;
  border-top: none;
}

.admission form button {
  font-size: 1.25rem;
  color: var(--black);
  background-color: var(--orange-red);
  border: none;
  border-bottom: var(--black) 1px solid;
  border-right: var(--black) 1px solid;
  border-radius: 15px;
  padding: 10px 20px;
  width: 100%;
  margin-bottom: 20px;
}

.admission form button:hover {
  background-color: var(--orange);
}

/* Gallery Styles */

.gallery {
  padding: 20px;
  width: 100%;
  box-sizing: border-box;
  display: flex;
  gap: 10px;
  flex-wrap: wrap;
  overflow: hidden;
}

.gallery :nth-child(1),
.gallery :nth-child(2),
.gallery :nth-child(4),
.gallery :nth-child(5) {
  width: 49%;
}

.gallery :nth-child(3),
.gallery :nth-child(6) {
  width: 100%;
}

/* Contact Us Form */

.contact {
  margin: 40px;
  display: flex;
  justify-content: space-between;
  align-items: stretch;
  gap: 20px;
  border-radius: 15px;
  font-size: large;
}

.contact div {
  width: 30%;
  padding: 20px;
  background-color: var(--uranian-blue);
  text-align: center;
  border: 1px solid #000;
  border-radius: 20px;
  word-wrap: break-word;
}

.contact div svg {
  height: 4rem;
}

.contact div a {
  color: var(--black);
}
```

#### File structure
- ![[Pasted image 20241020193529.png]]

## References
- [[html assignment.pdf]]