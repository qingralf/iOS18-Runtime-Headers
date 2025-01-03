/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPSearchReference : NSObject <TSKSearchReference> {
    bool  _autohideHighlight;
    NSArray * _findHighlights;
    bool  _pulseHighlight;
    bool  _refersToSmartField;
    TSWPSelection * _selection;
    TSWPSmartField * _smartField;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _smartFieldRange;
    TSWPStorage * _storage;
    <TSKAnnotation> * annotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  searchReferencePoint;
}

@property (nonatomic, retain) <TSKAnnotation> *annotation;
@property (nonatomic) bool autohideHighlight;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *findHighlights;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInsertionPoint;
@property (nonatomic) bool pulseHighlight;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) bool refersToSmartField;
@property (nonatomic) struct CGPoint { double x1; double x2; } searchReferencePoint;
@property (nonatomic, retain) TSWPSelection *selection;
@property (nonatomic, retain) TSWPSmartField *smartField;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } smartFieldRange;
@property (readonly) Class superclass;

+ (id)searchReferenceWithStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)searchReferenceWithStorage:(id)arg1 selection:(id)arg2;

- (id)annotation;
- (bool)autohideHighlight;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)findHighlights;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithStorage:(id)arg1 selection:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isInsertionPoint;
- (bool)isReplaceable;
- (bool)isSelectable;
- (id)model;
- (void)pUpdateSelection;
- (bool)pulseHighlight;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (bool)refersToSmartField;
- (id)searchReferenceEnd;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3;
- (struct CGPoint { double x1; double x2; })searchReferencePoint;
- (id)searchReferenceStart;
- (id)selection;
- (void)setAnnotation:(id)arg1;
- (void)setAutohideHighlight:(bool)arg1;
- (void)setFindHighlights:(id)arg1;
- (void)setPulseHighlight:(bool)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRefersToSmartField:(bool)arg1;
- (void)setSearchReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelection:(id)arg1;
- (void)setSmartField:(id)arg1;
- (void)setSmartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)smartField;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })smartFieldRange;
- (id)storage;

@end
