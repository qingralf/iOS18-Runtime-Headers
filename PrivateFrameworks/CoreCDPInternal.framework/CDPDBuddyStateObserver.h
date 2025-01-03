/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDBuddyStateObserver : NSObject <CDPDXPCEventListener> {
    NSMutableOrderedSet * _listeners;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *listeners;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
- (id)init;
- (id)listeners;
- (void)registerListener:(id)arg1;
- (void)setListeners:(id)arg1;

@end
