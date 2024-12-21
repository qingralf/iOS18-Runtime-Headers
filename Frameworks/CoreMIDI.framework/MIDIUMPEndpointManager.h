/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDIUMPEndpointManager : NSObject {
    NSMutableArray * _endpoints;
    NSMutableArray * _functionBlocks;
}

@property (nonatomic, readonly, copy) NSArray *UMPEndpoints;
@property (nonatomic, retain) NSMutableArray *functionBlocks;

+ (id)description;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)UMPEndpoints;
- (void)addEndpoint:(id)arg1;
- (void)addFunctionBlock:(id)arg1;
- (id)findEndpoint:(unsigned int)arg1;
- (id)findFunctionBlock:(unsigned int)arg1;
- (id)functionBlocks;
- (id)init;
- (bool)postNotificationName:(id)arg1 endpoint:(id)arg2 functionBlock:(id)arg3;
- (bool)removeEndpoint:(unsigned int)arg1;
- (bool)removeFunctionBlock:(unsigned int)arg1;
- (void)setFunctionBlocks:(id)arg1;
- (void)updateEndpoint:(unsigned int)arg1 description:(id)arg2;
- (void)updateFunctionBlock:(unsigned int)arg1 description:(id)arg2;

@end