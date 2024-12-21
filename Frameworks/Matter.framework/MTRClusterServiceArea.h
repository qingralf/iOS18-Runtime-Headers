/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRClusterServiceArea : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeCurrentAreaWithParams:(id)arg1;
- (id)readAttributeEstimatedEndTimeWithParams:(id)arg1;
- (id)readAttributeEventListWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeProgressWithParams:(id)arg1;
- (id)readAttributeSelectedAreasWithParams:(id)arg1;
- (id)readAttributeSupportedAreasWithParams:(id)arg1;
- (id)readAttributeSupportedMapsWithParams:(id)arg1;
- (void)selectAreasWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)skipAreaWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;

@end