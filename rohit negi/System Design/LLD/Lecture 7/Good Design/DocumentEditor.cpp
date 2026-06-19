#include<iostream>
#include<vector>
#include<string>
#include<fstream>


using namespace std;

// Abstraction for document elements

class DocumentElement {
public:
    virtual string render() = 0; // Pure virtual function for rendering
};


// Concreate implementation for text element
class TextElement : public DocumentElement {
private:
    string text;

public:
    TextElement(string text) {
        this->text = text;
    }


    string render() override {
        return text + "\n";
    }
};


// Concrete implementation for image element

class ImageElement : public DocumentElement {
private:
    string imagePath;

public:
    ImageElement(string imagePath) {
        this->imagePath = imagePath;
    }

    string render() override {
        return "[Image: " + imagePath + "]\n";
    }
};


// NewLineElement to represent new line in document
class NewLineElement : public DocumentElement {
public:
    string render() override {
        return "\n";
    }
};


// TableSpacerElement to represent space between table and other elements

class TableSpacerElement : public DocumentElement {
public:
    string render() override {
        return "\t"; // Two tabs for spacing
    }
};


// Document class responsible for holding a collection of document elements and rendering them

class Document {
private:
    vector<DocumentElement*> DocumentElements;
public:
    void addElement(DocumentElement* element) {
        DocumentElements.push_back(element);
    }

    string render() {
        string result;
        for (auto element : DocumentElements) {
            result += element->render();
        }
        return result;
    }
};

// persistent abstraction

class Persistent {
public:
    virtual void save(string data) = 0; // Pure virtual function for saving data
};


// Filestorage implementation of persistent

class FileStorage : public Persistent {
public:
    void save(string data) override {
        ofstream file("document.txt");
        if (file.is_open()) {
            file << data;
            file.close();
            cout << "Document saved to document.txt" << endl;
        } else {
            cout << "Error: Unable to open file for writing." << endl;
        }
    }
};



// placeholder for db storage implementation 

class DBStorage : public Persistent {
public:
    void save(string data) override {
        // Implementation for saving data to database
    }
};


// DocumentEditor class managing client interaction

class DocumentEditor {
private:
    Document* document;
    Persistent* storage;
    string renderedDocument;

public:
    DocumentEditor(Document* document, Persistent* storage) {
        this->document = document;
        this->storage = storage;
    }

    void addText(string text) {
        document->addElement(new TextElement(text));
    }


    void addImage(string imagePath) {
        document->addElement(new ImageElement(imagePath));
    }


    // Adds a new line to the document
    void addNewLine() {
        document->addElement(new NewLineElement());
    }


    // Adds a tab space  to the document
    void addTabSpace() {
        document->addElement(new TableSpacerElement());
    }


    string renderDocument() {
        if (renderedDocument.empty()) {
            renderedDocument = document->render();
        }
        return renderedDocument;
    }


    void saveDocument() {
        storage->save(renderDocument());
    }
};


// client usage example
int main() {
    Document* document = new Document();
    Persistent* persistence = new FileStorage();
    DocumentEditor* editor = new DocumentEditor(document, persistence);


    // Simulate a client using the editor with common text formattin features
    editor->addText("Hello, world!");
    editor->addNewLine();
    editor->addText("This is a real-world document editor example.");
    editor->addNewLine();
    editor->addTabSpace();
    editor->addText("Indented text after a tab space.");
    editor->addNewLine();
    editor->addImage("picture.jpg");

    // Render and display the final document.
    cout << editor->renderDocument() << endl;

    editor->saveDocument();

    return 0;
}
