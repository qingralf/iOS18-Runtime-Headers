/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensitiveContentAnalysisUI.framework/SensitiveContentAnalysisUI
 */

@interface SCUIReportMessage : NSObject {
    NSArray * _attachmentIdentifiers;
    NSString * _body;
    NSDate * _date;
    NSString * _senderAccountID;
    NSString * _senderDisplayName;
}

@property (readonly, copy) NSArray *attachmentIdentifiers;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *senderAccountID;
@property (readonly, copy) NSString *senderDisplayName;

- (void).cxx_destruct;
- (id)attachmentIdentifiers;
- (id)body;
- (id)date;
- (id)initWithDate:(id)arg1 senderAccountID:(id)arg2 senderDisplayName:(id)arg3 body:(id)arg4 attachmentIdentifiers:(id)arg5;
- (id)senderAccountID;
- (id)senderDisplayName;

@end
