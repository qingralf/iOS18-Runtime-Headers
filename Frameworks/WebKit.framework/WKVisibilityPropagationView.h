/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKVisibilityPropagationView : UIView {
    struct Vector<std::pair<WTF::WeakPtr<WebKit::AuxiliaryProcessProxy>, WTF::RetainPtr<id<UIInteraction>>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _processesAndInteractions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_containsInteractionForProcess:(void*)arg1;
- (void)propagateVisibilityToProcess:(void*)arg1;
- (void)stopPropagatingVisibilityToProcess:(void*)arg1;

@end
