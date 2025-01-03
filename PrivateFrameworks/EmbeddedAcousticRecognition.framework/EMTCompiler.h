/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EMTCompiler : NSObject {
    struct shared_ptr<quasar::TranslatorCompiler> { 
        struct TranslatorCompiler {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _translatorCompiler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)compile;
- (id)initWithModelURLs:(id)arg1;
- (bool)isCompileRequired;

@end
