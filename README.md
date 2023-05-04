# Mini-Search-Application

## TA: Mohammed Ramadan
## Team: GEN_120

- الاء احمد خليفه عبد الله
20201700130

- إيمان خالد عواد متولي
20201701062

- ايمان على عبد الرحمن على
20201700165

- تسنيم مجدي رجب اسماعيل
20201700198

- حبيبه محمد عادل محمد عبد الدايم
20201700221

- رضوى محمد جودة محمد اللبان
20201700260


## Functions:

1. Document_Name
-In all the forms except Search form
A function to take the index of the document which we need to use currently and return its name using the "document_title" array

2. Convert_To_Lower
-In all the forms
A function to take documents' contents and the text which we need to search for to convert them to lowercase so the search can be CaSe InSeNsItIvE

3. Storage
-In MyForm form
A function to store the documents' contents in 2 arrays:
-"document_content" an array to store the original content to update, delete or add to it
-"document_lowercase_content" another array to store the lowercase content to search in it

4. Searching
-In Search form
A function to take the text which we need to search for from user, convert it to lowercase using "Convert_To_Lower" function, search for it in "document_lowercase_content" array and -if it's found- display the document's title to the user. It also stores the index of the document contains the required text and the text's index in the document

5. Delete_Found_Text
-In ModificationText form
A function to delete the found text form the 2 content's arrays and from the original document using the found text, the document's index and the text's index


6. Update_Found_Text
-In UpdateText form
A function to replace the found text with the new text given by the user in the 2 content's arrays and in the original document using the found text and document's index

7. Adding_Text
-In AddText form
A function to take the new text which we need to add to a certain document from the user and add it to the content's arrays and to the original document using the "document_title" array

- Thank you for using our Application!
