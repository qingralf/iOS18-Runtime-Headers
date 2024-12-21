/* Generated by RuntimeBrowser.
 */

@protocol SRCSTextMarkerRangeProtocol <NSObject>

@required

+ (<SRCSTextMarkerRangeProtocol> *)markerRangeWithNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (<SRCSTextMarkerRangeProtocol> *)markerRangeWithStartMarker:(id <SRCSTextMarkerProtocol>)arg1 endMarker:(id <SRCSTextMarkerProtocol>)arg2;
+ (<SRCSTextMarkerRangeProtocol> *)markerRangeWithStartMarker:(id <SRCSTextMarkerProtocol>)arg1 endMarker:(id <SRCSTextMarkerProtocol>)arg2 forTextElement:(id)arg3;

- (bool)containsMarker:(id <SRCSTextMarkerProtocol>)arg1 forUIElement:(id)arg2;
- (bool)containsRange:(id <SRCSTextMarkerProtocol>)arg1 forUIElement:(id)arg2;
- (<SRCSTextMarkerProtocol> *)endMarker;
- (id)initWithStartMarker:(id <SRCSTextMarkerProtocol>)arg1 endMarker:(id <SRCSTextMarkerProtocol>)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nsRange;
- (<SRCSTextMarkerProtocol> *)startMarker;

@end