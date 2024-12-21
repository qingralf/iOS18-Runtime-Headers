/* Generated by RuntimeBrowser.
 */

@protocol HAL_DSP_IOProcessor <NSObject>

@required

- (NSDictionary *)adaptToConfigurationChange:(NSDictionary *)arg1 withCallbacks:(void*)arg2 error:(id*)arg3;
- (<HAL_DSP_PropertySet> *)getProcessorPropertySet;
- (NSDictionary *)negotiateConfigurationChange:(NSDictionary *)arg1 error:(id*)arg2;
- (NSDictionary *)simulateConfigurationChange:(NSDictionary *)arg1 error:(id*)arg2;

@end