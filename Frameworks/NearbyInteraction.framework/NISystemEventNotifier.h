/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NISystemEventNotifier : NSObject {
    NISession * parentSession;
}

- (void).cxx_destruct;
- (void)_notifyResourceUsageLimitExceeded:(bool)arg1 forSessionConfigurationType:(Class)arg2;
- (id)initWithParentSession:(id)arg1;
- (void)notifyPassiveAccessIntent:(unsigned int)arg1;

@end
