/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRListItemOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing> {
    CRListItemMarker * _marker;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } markerRange;
@property (readonly) long long markerType;
@property (readonly) Class superclass;

+ (id)listItemForParagraph:(id)arg1;
+ (bool)textStartsWithListItem:(id)arg1;

- (void).cxx_destruct;
- (bool)contributesToDocumentHierarchy;
- (id)initWithLayoutListItem:(id)arg1;
- (id)layoutComponents;
- (id)listItemByAppendingParagraph:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markerRange;
- (long long)markerType;
- (id)regionsSuitableForDataDetectorOutput;
- (unsigned long long)type;

@end
