#ifndef __THREAD_POOL_H__
#define __THREAD_POOL_H__
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

typedef struct     thread_pool_struct thread_pool_type;

void               thread_pool_join(thread_pool_type * );
thread_pool_type * thread_pool_alloc(int , bool start_queue);
void 		   thread_pool_add_job(thread_pool_type * ,void * (*) (void *) , void *);
void 		   thread_pool_free(thread_pool_type *);
void               thread_pool_restart( thread_pool_type * tp );
void             * thread_pool_iget_return_value( const thread_pool_type * pool , int queue_index );

#ifdef __cplusplus
}
#endif
#endif
