/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRClusterValveConfigurationAndControl : MTRGenericCluster

- (void)closeWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)closeWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)openWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)openWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeAutoCloseTimeWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeCurrentLevelWithParams:(id)arg1;
- (id)readAttributeCurrentStateWithParams:(id)arg1;
- (id)readAttributeDefaultOpenDurationWithParams:(id)arg1;
- (id)readAttributeDefaultOpenLevelWithParams:(id)arg1;
- (id)readAttributeEventListWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeLevelStepWithParams:(id)arg1;
- (id)readAttributeOpenDurationWithParams:(id)arg1;
- (id)readAttributeRemainingDurationWithParams:(id)arg1;
- (id)readAttributeTargetLevelWithParams:(id)arg1;
- (id)readAttributeTargetStateWithParams:(id)arg1;
- (id)readAttributeValveFaultWithParams:(id)arg1;
- (void)writeAttributeDefaultOpenDurationWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeDefaultOpenDurationWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeDefaultOpenLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeDefaultOpenLevelWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end