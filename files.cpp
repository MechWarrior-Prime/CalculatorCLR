using namespace System;
using namespace System::Windows::Forms;

// SaveFileDialog is static, like MessageBox

String^ AskForSaveFileName(String^ title, String^ DefaultExtension) {
	SaveFileDialog^ sfd = gcnew SaveFileDialog;
	sfd->DefaultExt = DefaultExtension;
	sfd->Title = title;
	sfd->Filter = DefaultExtension + " files (*." + DefaultExtension + ")|*." + DefaultExtension + "|All files (*.*)|*.*";
	sfd->FilterIndex = 1;
	sfd->RestoreDirectory = true;

	if (sfd->ShowDialog() == DialogResult::OK)
	{
		return sfd->FileName;
	}
	return "";
}