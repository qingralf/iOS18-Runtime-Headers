/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASSearchBufferArrayData : NSObject <AADataEventType> {
    NSNumber * _attachmentHitCount;
    NSNumber * _isResultSelected;
    NSNumber * _nonTopHitCount;
    NSNumber * _nonTopHitRawCount;
    NSNumber * _searchStringLength;
    NSNumber * _topHitCount;
}

@property (nonatomic, readonly) NSNumber *attachmentHitCount;
@property (nonatomic, readonly) NSNumber *isResultSelected;
@property (nonatomic, readonly) NSNumber *nonTopHitCount;
@property (nonatomic, readonly) NSNumber *nonTopHitRawCount;
@property (nonatomic, readonly) NSNumber *searchStringLength;
@property (nonatomic, readonly) NSNumber *topHitCount;

+ (id)dataName;
+ (bool)requiresDiagnosticsConsent;

- (void).cxx_destruct;
- (id)attachmentHitCount;
- (id)initWithSearchStringLength:(id)arg1 topHitCount:(id)arg2 nonTopHitCount:(id)arg3 isResultSelected:(id)arg4 nonTopHitRawCount:(id)arg5 attachmentHitCount:(id)arg6;
- (id)isResultSelected;
- (id)nonTopHitCount;
- (id)nonTopHitRawCount;
- (id)searchStringLength;
- (id)toDict;
- (id)topHitCount;

@end