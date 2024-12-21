/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWConcrete_nw_resolver_config : NSObject <OS_nw_resolver_config> {
    struct retained_ptr<NSObject<OS_nw_fd_wrapper> *> { 
        NSObject<OS_nw_fd_wrapper> *m_obj; 
        unsigned int m_should_release : 1; 
        unsigned int __pad_bits : 7; 
        unsigned char __pad_bytes[7]; 
    }  agent_fd;
    struct retained_ptr<NSObject<OS_xpc_object> *> { 
        NSObject<OS_xpc_object> *m_obj; 
        unsigned int m_should_release : 1; 
        unsigned int __pad_bits : 7; 
        unsigned char __pad_bytes[7]; 
    }  dictionary;
    unsigned int  generation;
    unsigned char  identifier;
    struct retained_ptr<NSObject<OS_dispatch_source> *> { 
        NSObject<OS_dispatch_source> *m_obj; 
        unsigned int m_should_release : 1; 
        unsigned int __pad_bits : 7; 
        unsigned char __pad_bytes[7]; 
    }  kernel_event_source;
    struct retained_ptr<NSObject<OS_nw_fd_wrapper> *> { 
        NSObject<OS_nw_fd_wrapper> *m_obj; 
        unsigned int m_should_release : 1; 
        unsigned int __pad_bits : 7; 
        unsigned char __pad_bytes[7]; 
    }  kernel_event_wrapper;
    struct unfair_mutex { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_mutex; 
    }  lock;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end