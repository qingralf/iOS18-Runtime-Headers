/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMRCSTransfer.framework/IMRCSTransfer
 */

@interface IMRCSTransferController : NSObject {
    void controllerCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)receiveTransferOnSimID:(id)arg1 transferURL:(id)arg2 destURL:(id)arg3 completion:(id /* block */)arg4;
- (void)sendTransferOnSimID:(id)arg1 fileURL:(id)arg2 thumbURL:(id)arg3 isAudioMessage:(bool)arg4 userInfo:(id)arg5 completion:(id /* block */)arg6;

@end