/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Anvil.framework/Anvil
 */

@interface Anvil.DocumentRegistrationURLSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    void completion;
    void data;
    void fileDescriptor;
    void fileSize;
    void update;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (id)init;

@end