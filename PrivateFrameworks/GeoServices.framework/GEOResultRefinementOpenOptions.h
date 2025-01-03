/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResultRefinementOpenOptions : NSObject {
    NSString * _displayName;
    GEOResultRefinementTime * _openAt;
    GEOResultRefinementToggle * _openNow;
    NSNumber * _selectionSequenceNumber;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) GEOResultRefinementTime *openAt;
@property (nonatomic, copy) GEOResultRefinementToggle *openNow;
@property (nonatomic, readonly) NSNumber *selectionSequenceNumber;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementOpenOptions;
- (id)displayName;
- (id)initWithDisplayName:(id)arg1 openNow:(id)arg2 openAt:(id)arg3;
- (id)initWithOpenOptions:(id)arg1;
- (id)openAt;
- (id)openNow;
- (id)selectionSequenceNumber;
- (void)setDisplayName:(id)arg1;
- (void)setOpenAt:(id)arg1;
- (void)setOpenNow:(id)arg1;

@end
