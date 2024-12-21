/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKChannelManager : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)defaultChannelManager;

- (void).cxx_destruct;
- (void)_invalidationHandler;
- (id)connection;
- (void)setConnection:(id)arg1;
- (void)vppaConsentedBundleIDsWithCompletion:(id /* block */)arg1;

@end