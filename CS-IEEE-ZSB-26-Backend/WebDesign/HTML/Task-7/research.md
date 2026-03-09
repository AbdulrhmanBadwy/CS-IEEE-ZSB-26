# Research-Task_7 (HTML)

1. ## [ GET vs POST](#difference-between-get-and-post-in-form)
1. ## [Semantic HTML](#why-use-semantic-html-tags-instead-of-only-div)
1. ## [The Request/Response Cycle](#requestresponse-cycle-typing-googlecom)

## Difference Between GET and POST in `<form>`

### GET
- Sends form data in the **URL** as query parameters.
- Data is **visible in the URL**.
- Saved in **browser history** and can be **bookmarked**.
- Has a **length limit**.
- Used for **retrieving data** (e.g., search forms).

### POST
- Sends form data in the **HTTP request body**.
- Data is **not visible in the URL**.
- **More secure** than GET.
- Supports **larger amounts of data**.
- Used for **sending or modifying data** (e.g., login, register).

### Which to Use for `register.html`?
Use **POST** because registration forms send **sensitive data** (like passwords), and POST keeps it out of the URL, making it **safer**.

## Why Use Semantic HTML Tags Instead of Only `<div>`?

While a website can be built using only `<div>` tags, using semantic tags like `<header>`, `<main>`, `<section>`, and `<footer>` is better because:

- **Better readability:** The code becomes easier for developers to understand and maintain.
- **Accessibility:** Screen readers can understand the page structure better for users with disabilities.
- **SEO improvement:** Search engines can better understand the content and structure of the page.
- **Clear structure:** Semantic tags describe the purpose of each part of the page.

**Conclusion:** Semantic HTML makes websites more **organized, accessible, and SEO-friendly** compared to using only `<div>` tags.

## Request/Response Cycle (Typing google.com)

1. **DNS Lookup:**  
   The browser asks a **DNS server** to translate `google.com` into its **IP address**.

2. **Get IP Address:**  
   DNS returns the **IP address** of the Google server.

3. **Send HTTP Request:**  
   The browser sends an **HTTP request** to that IP address asking for the webpage.

4. **Server Response:**  
   The Google server processes the request and sends back an **HTTP response** containing the HTML, CSS, and other resources.

5. **Render Page:**  
   The browser receives the files and **renders the webpage** on your screen.