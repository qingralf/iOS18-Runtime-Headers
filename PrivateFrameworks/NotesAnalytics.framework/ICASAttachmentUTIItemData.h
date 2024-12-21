/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASAttachmentUTIItemData : NSObject <AADataEventType> {
    NSNumber * _countOfAttachments;
    NSString * _uti;
}

@property (nonatomic, readonly) NSNumber *countOfAttachments;
@property (nonatomic, readonly) NSString *uti;

+ (id)dataName;
+ (bool)requiresDiagnosticsConsent;

- (void).cxx_destruct;
- (id)countOfAttachments;
- (id)initWithUti:(id)arg1 countOfAttachments:(id)arg2;
- (id)toDict;
- (id)uti;

@end