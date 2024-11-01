// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_object_detection_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice
#include "ros_object_detection_msgs/msg/detail/bounding_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_object_detection_msgs__msg__BoundingBox__init(ros_object_detection_msgs__msg__BoundingBox * msg)
{
  if (!msg) {
    return false;
  }
  // xmin
  // ymin
  // xmax
  // ymax
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    ros_object_detection_msgs__msg__BoundingBox__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
ros_object_detection_msgs__msg__BoundingBox__fini(ros_object_detection_msgs__msg__BoundingBox * msg)
{
  if (!msg) {
    return;
  }
  // xmin
  // ymin
  // xmax
  // ymax
  // data
  rosidl_runtime_c__String__fini(&msg->data);
  // confidence
}

bool
ros_object_detection_msgs__msg__BoundingBox__are_equal(const ros_object_detection_msgs__msg__BoundingBox * lhs, const ros_object_detection_msgs__msg__BoundingBox * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xmin
  if (lhs->xmin != rhs->xmin) {
    return false;
  }
  // ymin
  if (lhs->ymin != rhs->ymin) {
    return false;
  }
  // xmax
  if (lhs->xmax != rhs->xmax) {
    return false;
  }
  // ymax
  if (lhs->ymax != rhs->ymax) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
ros_object_detection_msgs__msg__BoundingBox__copy(
  const ros_object_detection_msgs__msg__BoundingBox * input,
  ros_object_detection_msgs__msg__BoundingBox * output)
{
  if (!input || !output) {
    return false;
  }
  // xmin
  output->xmin = input->xmin;
  // ymin
  output->ymin = input->ymin;
  // xmax
  output->xmax = input->xmax;
  // ymax
  output->ymax = input->ymax;
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  return true;
}

ros_object_detection_msgs__msg__BoundingBox *
ros_object_detection_msgs__msg__BoundingBox__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_object_detection_msgs__msg__BoundingBox * msg = (ros_object_detection_msgs__msg__BoundingBox *)allocator.allocate(sizeof(ros_object_detection_msgs__msg__BoundingBox), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_object_detection_msgs__msg__BoundingBox));
  bool success = ros_object_detection_msgs__msg__BoundingBox__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_object_detection_msgs__msg__BoundingBox__destroy(ros_object_detection_msgs__msg__BoundingBox * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_object_detection_msgs__msg__BoundingBox__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_object_detection_msgs__msg__BoundingBox__Sequence__init(ros_object_detection_msgs__msg__BoundingBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_object_detection_msgs__msg__BoundingBox * data = NULL;

  if (size) {
    data = (ros_object_detection_msgs__msg__BoundingBox *)allocator.zero_allocate(size, sizeof(ros_object_detection_msgs__msg__BoundingBox), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_object_detection_msgs__msg__BoundingBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_object_detection_msgs__msg__BoundingBox__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_object_detection_msgs__msg__BoundingBox__Sequence__fini(ros_object_detection_msgs__msg__BoundingBox__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_object_detection_msgs__msg__BoundingBox__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_object_detection_msgs__msg__BoundingBox__Sequence *
ros_object_detection_msgs__msg__BoundingBox__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_object_detection_msgs__msg__BoundingBox__Sequence * array = (ros_object_detection_msgs__msg__BoundingBox__Sequence *)allocator.allocate(sizeof(ros_object_detection_msgs__msg__BoundingBox__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_object_detection_msgs__msg__BoundingBox__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_object_detection_msgs__msg__BoundingBox__Sequence__destroy(ros_object_detection_msgs__msg__BoundingBox__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_object_detection_msgs__msg__BoundingBox__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_object_detection_msgs__msg__BoundingBox__Sequence__are_equal(const ros_object_detection_msgs__msg__BoundingBox__Sequence * lhs, const ros_object_detection_msgs__msg__BoundingBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_object_detection_msgs__msg__BoundingBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_object_detection_msgs__msg__BoundingBox__Sequence__copy(
  const ros_object_detection_msgs__msg__BoundingBox__Sequence * input,
  ros_object_detection_msgs__msg__BoundingBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_object_detection_msgs__msg__BoundingBox);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_object_detection_msgs__msg__BoundingBox * data =
      (ros_object_detection_msgs__msg__BoundingBox *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_object_detection_msgs__msg__BoundingBox__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_object_detection_msgs__msg__BoundingBox__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_object_detection_msgs__msg__BoundingBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
