/* Generated by RuntimeBrowser.
 */

@protocol CKObscurableBalloonViewDelegate <NSObject>

@required

- (void)didTapBlockContact;
- (void)didTapWaysToGetHelp;
- (bool)isReportingEnabled;
- (bool)isRevealingContentEnabled;

@optional

- (void)evidenceToReportWithContext:(void *)arg1 balloonView:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, CKObscurableBalloonView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SCUIReportEvidence *, NSError *, void*
- (void)presentGetHelpAlert;

@end
