/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRClusterTimeFormatLocalization : MTRGenericCluster

- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeActiveCalendarTypeWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeEventListWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeHourFormatWithParams:(id)arg1;
- (id)readAttributeSupportedCalendarTypesWithParams:(id)arg1;
- (void)writeAttributeActiveCalendarTypeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeActiveCalendarTypeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeHourFormatWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeHourFormatWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
