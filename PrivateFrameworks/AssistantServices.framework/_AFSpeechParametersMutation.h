/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFSpeechParametersMutation : NSObject <AFSpeechParametersMutating> {
    NSString * _applicationName;
    AFSpeechParameters * _base;
    bool  _censorSpeech;
    bool  _detectUtterances;
    bool  _farField;
    NSString * _inputOrigin;
    NSString * _interactionIdentifier;
    NSArray * _jitGrammar;
    NSString * _language;
    CLLocation * _location;
    NSArray * _loggingContext;
    double  _maximumRecognitionDuration;
    NSURL * _modelOverrideURL;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasLanguage : 1; 
        unsigned int hasInteractionIdentifier : 1; 
        unsigned int hasTask : 1; 
        unsigned int hasLoggingContext : 1; 
        unsigned int hasApplicationName : 1; 
        unsigned int hasProfile : 1; 
        unsigned int hasOverrides : 1; 
        unsigned int hasModelOverrideURL : 1; 
        unsigned int hasOriginalAudioFileURL : 1; 
        unsigned int hasNarrowband : 1; 
        unsigned int hasDetectUtterances : 1; 
        unsigned int hasCensorSpeech : 1; 
        unsigned int hasFarField : 1; 
        unsigned int hasSecureOfflineOnly : 1; 
        unsigned int hasShouldStoreAudioOnDevice : 1; 
        unsigned int hasMaximumRecognitionDuration : 1; 
        unsigned int hasInputOrigin : 1; 
        unsigned int hasLocation : 1; 
        unsigned int hasJitGrammar : 1; 
    }  _mutationFlags;
    bool  _narrowband;
    NSURL * _originalAudioFileURL;
    NSDictionary * _overrides;
    NSData * _profile;
    bool  _secureOfflineOnly;
    bool  _shouldStoreAudioOnDevice;
    NSString * _task;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getApplicationName;
- (bool)getCensorSpeech;
- (bool)getDetectUtterances;
- (bool)getFarField;
- (id)getInputOrigin;
- (id)getInteractionIdentifier;
- (id)getJitGrammar;
- (id)getLanguage;
- (id)getLocation;
- (id)getLoggingContext;
- (double)getMaximumRecognitionDuration;
- (id)getModelOverrideURL;
- (bool)getNarrowband;
- (id)getOriginalAudioFileURL;
- (id)getOverrides;
- (id)getProfile;
- (bool)getSecureOfflineOnly;
- (bool)getShouldStoreAudioOnDevice;
- (id)getTask;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setApplicationName:(id)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setDetectUtterances:(bool)arg1;
- (void)setFarField:(bool)arg1;
- (void)setInputOrigin:(id)arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setJitGrammar:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLoggingContext:(id)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setModelOverrideURL:(id)arg1;
- (void)setNarrowband:(bool)arg1;
- (void)setOriginalAudioFileURL:(id)arg1;
- (void)setOverrides:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSecureOfflineOnly:(bool)arg1;
- (void)setShouldStoreAudioOnDevice:(bool)arg1;
- (void)setTask:(id)arg1;

@end
