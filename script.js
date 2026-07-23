const username = "priteshdev8767";
const repo = "DSA-tcs-NQT";

// Fetch repo files
async function getFiles() {
    const res = await fetch(`https://api.github.com/repos/${username}/${repo}/contents`);
    const data = await res.json();

    const fileList = document.getElementById("fileList");

    data.forEach(file => {
        if (file.type === "file") {
            const li = document.createElement("li");
            li.textContent = file.name;
            li.className = "cursor-pointer hover:bg-blue-800 p-2";

            li.onclick = () => getFileContent(file.download_url);

            fileList.appendChild(li);
        }
    });
}

// Fetch file content
async function getFileContent(url) {
    const res = await fetch(url);
    const text = await res.text();

    document.getElementById("code").textContent = text;
}

getFiles();
