/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppIntents.framework/AppIntents
 */

@interface LNProcessInstanceRegistryClient : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)registerWithError:(id*)arg1;
- (id)xpcConnection;

@end
