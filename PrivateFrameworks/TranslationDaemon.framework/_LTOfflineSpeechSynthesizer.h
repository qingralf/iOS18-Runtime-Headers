/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon
 */

@interface _LTOfflineSpeechSynthesizer : NSObject {
    _LTAudioDecoder * _audioDecoder;
    id /* block */  _completion;
    NSMutableArray * _currentAudioData;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _currentAudioStreamDescription;
    SiriTTSSynthesisRequest * _currentRequest;
    NSMutableArray * _currentWordTimingInfo;
    SiriTTSDaemonSession * _session;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCompletion:(id /* block */)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2;

@end
