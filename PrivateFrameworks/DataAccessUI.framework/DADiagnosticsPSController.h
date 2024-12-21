/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate> {
    UIAlertView * _savingDataAlert;
    UIAlertView * _simpleAlert;
    SEL  _simpleConfirmSheetDismissedSEL;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)diagnosticsVisible;
+ (id)dumpRuntimeStateSpecifiers;
+ (id)linkSpecifier;

- (void).cxx_destruct;
- (void)_dismissSavingDataAlert;
- (void)_presentNotesController;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)booleanPropertyWithSpecifier:(id)arg1;
- (id)diagnosticSpecifiers;
- (void)handleClearAllLogsForSpecifier:(id)arg1;
- (void)handleDumpRuntimeStateForSpecifier:(id)arg1;
- (void)handleSaveAllLogsForSpecifier:(id)arg1;
- (void)handleSaveAllLogsStep2;
- (bool)isLoggingEnabledForSpecifier:(id)arg1;
- (id)pathsOfAllLogFiles;
- (id)pathsOfPurgableFiles;
- (void)purgeFileAtPath:(id)arg1;
- (void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissedSelector:(SEL)arg3;
- (bool)saveFileAtPath:(id)arg1 toDirectory:(id)arg2 withExtension:(id)arg3 error:(id*)arg4;
- (void)saveLogsWithNotes:(id)arg1;
- (void)saveNotesInBackground:(id)arg1;
- (id)savedLogsDirectoryNameForSpecifier:(id)arg1;
- (void)setBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setLoggingEnabled:(bool)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (void)suspend;

@end