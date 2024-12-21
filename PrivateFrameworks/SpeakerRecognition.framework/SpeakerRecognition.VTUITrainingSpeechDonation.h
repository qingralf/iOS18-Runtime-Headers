/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
 */

@interface SpeakerRecognition.VTUITrainingSpeechDonation : NSObject {
    void audioFormat;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  defaultUUID;
    void donorBundleID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  locale;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  recordingDate;
    void transcription;
}

- (void).cxx_destruct;
- (id)donateWithAudioBuffer:(id)arg1;
- (id)donateWithAudioBuffer:(id)arg1 speechId:(id)arg2;
- (id)init;
- (id)initWithDonorBundleID:(id)arg1 recordingDate:(id)arg2 locale:(id)arg3 transcription:(id)arg4;

@end