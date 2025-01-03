/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRClusterWaterHeaterMode : MTRGenericCluster

- (void)changeToModeWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeCurrentModeWithParams:(id)arg1;
- (id)readAttributeEventListWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeOnModeWithParams:(id)arg1;
- (id)readAttributeStartUpModeWithParams:(id)arg1;
- (id)readAttributeSupportedModesWithParams:(id)arg1;
- (void)writeAttributeOnModeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeOnModeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeStartUpModeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeStartUpModeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
