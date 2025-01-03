/* Generated by RuntimeBrowser.
 */

@protocol CMIOExtensionStreamSource <NSObject>

@required

- (bool)authorizedToStartStreamForClient:(CMIOExtensionClient *)arg1;
- (NSSet *)availableProperties;
- (NSArray *)formats;
- (bool)setStreamProperties:(CMIOExtensionStreamProperties *)arg1 error:(id*)arg2;
- (bool)startStreamAndReturnError:(id*)arg1;
- (bool)stopStreamAndReturnError:(id*)arg1;
- (CMIOExtensionStreamProperties *)streamPropertiesForProperties:(NSSet *)arg1 error:(id*)arg2;

@end
