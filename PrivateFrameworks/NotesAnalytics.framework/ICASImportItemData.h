/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASImportItemData : NSObject <AADataEventType> {
    ICASImportFileType * _importFileType;
    NSNumber * _importItemCount;
}

@property (nonatomic, readonly) ICASImportFileType *importFileType;
@property (nonatomic, readonly) NSNumber *importItemCount;

+ (id)dataName;
+ (bool)requiresDiagnosticsConsent;

- (void).cxx_destruct;
- (id)importFileType;
- (id)importItemCount;
- (id)initWithImportFileType:(id)arg1 importItemCount:(id)arg2;
- (id)toDict;

@end
