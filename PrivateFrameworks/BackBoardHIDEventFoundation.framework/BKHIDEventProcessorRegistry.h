/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
 */

@interface BKHIDEventProcessorRegistry : NSObject <BKHIDEventProcessorRegistering> {
    NSMutableDictionary * _eventProcessorsByClassName;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addEventProcessor:(id)arg1;
- (id)eventProcessorOfClass:(Class)arg1;
- (id)init;

@end
